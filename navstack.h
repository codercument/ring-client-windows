/***************************************************************************
 * Copyright (C) 2015 by Savoir-faire Linux                                *
 * Author: Edric Ladent Milaret <edric.ladent-milaret@savoirfairelinux.com>*
 *                                                                         *
 * This program is free software; you can redistribute it and/or modify    *
 * it under the terms of the GNU General Public License as published by    *
 * the Free Software Foundation; either version 3 of the License, or       *
 * (at your option) any later version.                                     *
 *                                                                         *
 * This program is distributed in the hope that it will be useful,         *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of          *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           *
 * GNU General Public License for more details.                            *
 *                                                                         *
 * You should have received a copy of the GNU General Public License       *
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.   *
 **************************************************************************/

#pragma once

#include <QStackedWidget>
#include <QStack>

#include "navwidget.h"
#include "configurationwidget.h"
#include "mainbar.h"
#include "navbar.h"
#include "callwidget.h"

class NavStack : public QWidget
{
    Q_OBJECT
public:
    NavStack(QStackedWidget* bar,
             QStackedWidget* stack,
             QWidget* parent = nullptr);
    ~NavStack();

public slots:
    void onNavigationRequested(ScreenEnum screen);
    void onBackRequested();

private:
    QStackedWidget* bar_;
    QStackedWidget* stack_;
    QList<NavWidget*> navList_;
    QStack<ScreenEnum> stackNav_;
    void setNavBar(NavWidget *navW);
};

