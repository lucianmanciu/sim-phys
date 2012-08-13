/****************************************************************************
**
** Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** You may use this file under the terms of the BSD license as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of Nokia Corporation and its Subsidiary(-ies) nor
**     the names of its contributors may be used to endorse or promote
**     products derived from this software without specific prior written
**     permission.
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
** $QT_END_LICENSE$
**
****************************************************************************/

#include <QtGui>

#include "window.h"

Window::Window()
{
    createSimulation(tr("Simulation"));
    createControls(tr("Controls"));

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(simulationTemp);
    layout->addWidget(controlsGroup);
    setLayout(layout);
    setWindowTitle(tr("Simulated Physics"));
}

void Window::createControls(const QString &title)
{
    controlsGroup = new QGroupBox(title);

    quantityLabel = new QLabel(tr("Quantity:"));
    weightLabel = new QLabel(tr("Weight:"));
    temperatureLabel = new QLabel(tr("Temperature:"));
    pressureLabel = new QLabel(tr("Pressure:"));
    volumeLabel = new QLabel(tr("Volume:"));
    xLabel = new QLabel(tr("X - >"));

    quantityLineEdit = new QLineEdit;
    weightLineEdit = new QLineEdit;
    temperatureLineEdit = new QLineEdit;

    pressureSlider = new QSlider;
    volumeSlider = new QSlider;

    simulateButton = new QPushButton;
    abortButton = new QPushButton;
    sortButton = new QPushButton;

    sortCombo = new QComboBox;
    sortCombo->addItem(tr("Q"));
    sortCombo->addItem(tr("W"));
    sortCombo->addItem(tr("T"));

    outputTextEdit = new QTextEdit;

    QGridLayout *controlsLayout = new QGridLayout;
    controlsLayout->addWidget(quantityLabel, 0, 0);
    controlsLayout->addWidget(quantityLabel, 5, 0);
    controlsLayout->addWidget(weightLabel, 0, 3);
    controlsLayout->addWidget(weightLabel, 5, 1);
    controlsLayout->addWidget(temperatureLabel, 1, 0);
    controlsLayout->addWidget(temperatureLabel, 5, 2);
    controlsLayout->addWidget(xLabel, 1, 1, 3, 2);
    controlsLayout->addWidget(pressureLabel, 2, 0);
    controlsLayout->addWidget(pressureLabel, 5, 3);
    controlsLayout->addWidget(volumeLabel, 3, 0);
    controlsLayout->addWidget(volumeLabel, 5, 4);
    controlsLayout->addWidget(quantityLineEdit, 0, 1);
    controlsLayout->addWidget(weightLineEdit, 0, 4);
    controlsLayout->addWidget(temperatureLineEdit, 1, 1);
    controlsLayout->addWidget(pressureSlider, 2, 1, 1, 4);
    controlsLayout->addWidget(volumeSlider, 3, 1, 1, 4);
    controlsLayout->addWidget(sortCombo, 4, 3);
    controlsLayout->addWidget(simulateButton, 4, 0);
    controlsLayout->addWidget(abortButton, 4, 2);
    controlsLayout->addWidget(sortButton, 4, 4);
    controlsLayout->addWidget(outputTextEdit, 6, 6, 0, 5);
    controlsGroup->setLayout(controlsLayout);
}

void Window::createSimulation(const QString &title)
{
    simulationTemp = new QGroupBox(title);
}
