///////////////////////////////////////////////////////////////////////////////
// Name:        os2/dataobj.h
// Purpose:     declaration of the wxDataObject
// Author:      David Webster (adapted from Robert Roebling's gtk port)
// Modified by:
// Created:     10/21/99
// RCS-ID:      $Id$
// Copyright:   (c) 1998, 1999 Vadim Zeitlin, Robert Roebling
// Licence:     wxWindows license
///////////////////////////////////////////////////////////////////////////////

#ifndef _WX_GTK_DATAOBJ_H_
#define _WX_GTK_DATAOBJ_H_

#ifdef __GNUG__
    #pragma interface "dataobj.h"
#endif

// ----------------------------------------------------------------------------
// wxDataObject is the same as wxDataObjectBase under wxGTK
// ----------------------------------------------------------------------------

class wxDataObject : public wxDataObjectBase
{
public:
    wxDataObject();

    virtual bool IsSupportedFormat( const wxDataFormat& format, Direction dir = Get ) const;
};

#endif // _WX_GTK_DATAOBJ_H_

