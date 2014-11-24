/****************************************************************************
**
** Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of Qt Creator.
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://www.qt.io/licensing.  For further information
** use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 or version 3 as published by the Free
** Software Foundation and appearing in the file LICENSE.LGPLv21 and
** LICENSE.LGPLv3 included in the packaging of this file.  Please review the
** following information to ensure the GNU Lesser General Public License
** requirements will be met: https://www.gnu.org/licenses/lgpl.html and
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
****************************************************************************/

#ifndef EDITORDOCUMENTHANDLE_H
#define EDITORDOCUMENTHANDLE_H

#include "baseeditordocumentprocessor.h"
#include "cpptools_global.h"

namespace CppTools {

class CPPTOOLS_EXPORT CppEditorDocumentHandle
{
public:
    CppEditorDocumentHandle();
    virtual ~CppEditorDocumentHandle();

    bool needsRefresh() const;
    void setNeedsRefresh(bool needsRefresh);

    // For the Working Copy
    virtual QString filePath() const = 0;
    virtual QByteArray contents() const = 0;
    virtual unsigned revision() const = 0;

    // For updating if new project info is set
    virtual BaseEditorDocumentProcessor *processor() = 0;

private:
    bool m_needsRefresh;
};

} // namespace CppTools

#endif // EDITORDOCUMENTHANDLE_H
