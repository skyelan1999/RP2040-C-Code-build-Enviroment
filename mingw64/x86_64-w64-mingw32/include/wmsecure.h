/*** Autogenerated by WIDL 7.7 from include/wmsecure.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __wmsecure_h__
#define __wmsecure_h__

/* Forward declarations */

#ifndef __IWMAuthorizer_FWD_DEFINED__
#define __IWMAuthorizer_FWD_DEFINED__
typedef interface IWMAuthorizer IWMAuthorizer;
#ifdef __cplusplus
interface IWMAuthorizer;
#endif /* __cplusplus */
#endif

#ifndef __IWMSecureChannel_FWD_DEFINED__
#define __IWMSecureChannel_FWD_DEFINED__
typedef interface IWMSecureChannel IWMSecureChannel;
#ifdef __cplusplus
interface IWMSecureChannel;
#endif /* __cplusplus */
#endif

#ifndef __IWMGetSecureChannel_FWD_DEFINED__
#define __IWMGetSecureChannel_FWD_DEFINED__
typedef interface IWMGetSecureChannel IWMGetSecureChannel;
#ifdef __cplusplus
interface IWMGetSecureChannel;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <oaidl.h>
#include <ocidl.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * IWMAuthorizer interface
 */
#ifndef __IWMAuthorizer_INTERFACE_DEFINED__
#define __IWMAuthorizer_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWMAuthorizer, 0xd9b67d36, 0xa9ad, 0x4eb4, 0xba,0xef, 0xdb,0x28,0x4e,0xf5,0x50,0x4c);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("d9b67d36-a9ad-4eb4-baef-db284ef5504c")
IWMAuthorizer : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetCertCount(
        DWORD *count) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetCert(
        DWORD index,
        BYTE **data) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSharedData(
        DWORD index,
        const BYTE *data,
        BYTE *cert,
        BYTE **ret_data) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWMAuthorizer, 0xd9b67d36, 0xa9ad, 0x4eb4, 0xba,0xef, 0xdb,0x28,0x4e,0xf5,0x50,0x4c)
#endif
#else
typedef struct IWMAuthorizerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWMAuthorizer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWMAuthorizer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWMAuthorizer *This);

    /*** IWMAuthorizer methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCertCount)(
        IWMAuthorizer *This,
        DWORD *count);

    HRESULT (STDMETHODCALLTYPE *GetCert)(
        IWMAuthorizer *This,
        DWORD index,
        BYTE **data);

    HRESULT (STDMETHODCALLTYPE *GetSharedData)(
        IWMAuthorizer *This,
        DWORD index,
        const BYTE *data,
        BYTE *cert,
        BYTE **ret_data);

    END_INTERFACE
} IWMAuthorizerVtbl;

interface IWMAuthorizer {
    CONST_VTBL IWMAuthorizerVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWMAuthorizer_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWMAuthorizer_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWMAuthorizer_Release(This) (This)->lpVtbl->Release(This)
/*** IWMAuthorizer methods ***/
#define IWMAuthorizer_GetCertCount(This,count) (This)->lpVtbl->GetCertCount(This,count)
#define IWMAuthorizer_GetCert(This,index,data) (This)->lpVtbl->GetCert(This,index,data)
#define IWMAuthorizer_GetSharedData(This,index,data,cert,ret_data) (This)->lpVtbl->GetSharedData(This,index,data,cert,ret_data)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IWMAuthorizer_QueryInterface(IWMAuthorizer* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IWMAuthorizer_AddRef(IWMAuthorizer* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IWMAuthorizer_Release(IWMAuthorizer* This) {
    return This->lpVtbl->Release(This);
}
/*** IWMAuthorizer methods ***/
static FORCEINLINE HRESULT IWMAuthorizer_GetCertCount(IWMAuthorizer* This,DWORD *count) {
    return This->lpVtbl->GetCertCount(This,count);
}
static FORCEINLINE HRESULT IWMAuthorizer_GetCert(IWMAuthorizer* This,DWORD index,BYTE **data) {
    return This->lpVtbl->GetCert(This,index,data);
}
static FORCEINLINE HRESULT IWMAuthorizer_GetSharedData(IWMAuthorizer* This,DWORD index,const BYTE *data,BYTE *cert,BYTE **ret_data) {
    return This->lpVtbl->GetSharedData(This,index,data,cert,ret_data);
}
#endif
#endif

#endif


#endif  /* __IWMAuthorizer_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWMSecureChannel interface
 */
#ifndef __IWMSecureChannel_INTERFACE_DEFINED__
#define __IWMSecureChannel_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWMSecureChannel, 0x2720598a, 0xd0f2, 0x4189, 0xbd,0x10, 0x91,0xc4,0x6e,0xf0,0x93,0x6f);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("2720598a-d0f2-4189-bd10-91c46ef0936f")
IWMSecureChannel : public IWMAuthorizer
{
    virtual HRESULT STDMETHODCALLTYPE WMSC_AddCertificate(
        IWMAuthorizer *cert) = 0;

    virtual HRESULT STDMETHODCALLTYPE WMSC_AddSignature(
        BYTE *signature,
        DWORD size) = 0;

    virtual HRESULT STDMETHODCALLTYPE WMSC_Connect(
        IWMSecureChannel *peer) = 0;

    virtual HRESULT STDMETHODCALLTYPE WMSC_IsConnected(
        WINBOOL *connected) = 0;

    virtual HRESULT STDMETHODCALLTYPE WMSC_Disconnect(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE WMSC_GetValidCertificate(
        BYTE **cert,
        DWORD *signature) = 0;

    virtual HRESULT STDMETHODCALLTYPE WMSC_Encrypt(
        BYTE *data,
        DWORD size) = 0;

    virtual HRESULT STDMETHODCALLTYPE WMSC_Decrypt(
        BYTE *data,
        DWORD size) = 0;

    virtual HRESULT STDMETHODCALLTYPE WMSC_Lock(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE WMSC_Unlock(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE WMSC_SetSharedData(
        DWORD index,
        BYTE *data) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWMSecureChannel, 0x2720598a, 0xd0f2, 0x4189, 0xbd,0x10, 0x91,0xc4,0x6e,0xf0,0x93,0x6f)
#endif
#else
typedef struct IWMSecureChannelVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWMSecureChannel *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWMSecureChannel *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWMSecureChannel *This);

    /*** IWMAuthorizer methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCertCount)(
        IWMSecureChannel *This,
        DWORD *count);

    HRESULT (STDMETHODCALLTYPE *GetCert)(
        IWMSecureChannel *This,
        DWORD index,
        BYTE **data);

    HRESULT (STDMETHODCALLTYPE *GetSharedData)(
        IWMSecureChannel *This,
        DWORD index,
        const BYTE *data,
        BYTE *cert,
        BYTE **ret_data);

    /*** IWMSecureChannel methods ***/
    HRESULT (STDMETHODCALLTYPE *WMSC_AddCertificate)(
        IWMSecureChannel *This,
        IWMAuthorizer *cert);

    HRESULT (STDMETHODCALLTYPE *WMSC_AddSignature)(
        IWMSecureChannel *This,
        BYTE *signature,
        DWORD size);

    HRESULT (STDMETHODCALLTYPE *WMSC_Connect)(
        IWMSecureChannel *This,
        IWMSecureChannel *peer);

    HRESULT (STDMETHODCALLTYPE *WMSC_IsConnected)(
        IWMSecureChannel *This,
        WINBOOL *connected);

    HRESULT (STDMETHODCALLTYPE *WMSC_Disconnect)(
        IWMSecureChannel *This);

    HRESULT (STDMETHODCALLTYPE *WMSC_GetValidCertificate)(
        IWMSecureChannel *This,
        BYTE **cert,
        DWORD *signature);

    HRESULT (STDMETHODCALLTYPE *WMSC_Encrypt)(
        IWMSecureChannel *This,
        BYTE *data,
        DWORD size);

    HRESULT (STDMETHODCALLTYPE *WMSC_Decrypt)(
        IWMSecureChannel *This,
        BYTE *data,
        DWORD size);

    HRESULT (STDMETHODCALLTYPE *WMSC_Lock)(
        IWMSecureChannel *This);

    HRESULT (STDMETHODCALLTYPE *WMSC_Unlock)(
        IWMSecureChannel *This);

    HRESULT (STDMETHODCALLTYPE *WMSC_SetSharedData)(
        IWMSecureChannel *This,
        DWORD index,
        BYTE *data);

    END_INTERFACE
} IWMSecureChannelVtbl;

interface IWMSecureChannel {
    CONST_VTBL IWMSecureChannelVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWMSecureChannel_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWMSecureChannel_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWMSecureChannel_Release(This) (This)->lpVtbl->Release(This)
/*** IWMAuthorizer methods ***/
#define IWMSecureChannel_GetCertCount(This,count) (This)->lpVtbl->GetCertCount(This,count)
#define IWMSecureChannel_GetCert(This,index,data) (This)->lpVtbl->GetCert(This,index,data)
#define IWMSecureChannel_GetSharedData(This,index,data,cert,ret_data) (This)->lpVtbl->GetSharedData(This,index,data,cert,ret_data)
/*** IWMSecureChannel methods ***/
#define IWMSecureChannel_WMSC_AddCertificate(This,cert) (This)->lpVtbl->WMSC_AddCertificate(This,cert)
#define IWMSecureChannel_WMSC_AddSignature(This,signature,size) (This)->lpVtbl->WMSC_AddSignature(This,signature,size)
#define IWMSecureChannel_WMSC_Connect(This,peer) (This)->lpVtbl->WMSC_Connect(This,peer)
#define IWMSecureChannel_WMSC_IsConnected(This,connected) (This)->lpVtbl->WMSC_IsConnected(This,connected)
#define IWMSecureChannel_WMSC_Disconnect(This) (This)->lpVtbl->WMSC_Disconnect(This)
#define IWMSecureChannel_WMSC_GetValidCertificate(This,cert,signature) (This)->lpVtbl->WMSC_GetValidCertificate(This,cert,signature)
#define IWMSecureChannel_WMSC_Encrypt(This,data,size) (This)->lpVtbl->WMSC_Encrypt(This,data,size)
#define IWMSecureChannel_WMSC_Decrypt(This,data,size) (This)->lpVtbl->WMSC_Decrypt(This,data,size)
#define IWMSecureChannel_WMSC_Lock(This) (This)->lpVtbl->WMSC_Lock(This)
#define IWMSecureChannel_WMSC_Unlock(This) (This)->lpVtbl->WMSC_Unlock(This)
#define IWMSecureChannel_WMSC_SetSharedData(This,index,data) (This)->lpVtbl->WMSC_SetSharedData(This,index,data)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IWMSecureChannel_QueryInterface(IWMSecureChannel* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IWMSecureChannel_AddRef(IWMSecureChannel* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IWMSecureChannel_Release(IWMSecureChannel* This) {
    return This->lpVtbl->Release(This);
}
/*** IWMAuthorizer methods ***/
static FORCEINLINE HRESULT IWMSecureChannel_GetCertCount(IWMSecureChannel* This,DWORD *count) {
    return This->lpVtbl->GetCertCount(This,count);
}
static FORCEINLINE HRESULT IWMSecureChannel_GetCert(IWMSecureChannel* This,DWORD index,BYTE **data) {
    return This->lpVtbl->GetCert(This,index,data);
}
static FORCEINLINE HRESULT IWMSecureChannel_GetSharedData(IWMSecureChannel* This,DWORD index,const BYTE *data,BYTE *cert,BYTE **ret_data) {
    return This->lpVtbl->GetSharedData(This,index,data,cert,ret_data);
}
/*** IWMSecureChannel methods ***/
static FORCEINLINE HRESULT IWMSecureChannel_WMSC_AddCertificate(IWMSecureChannel* This,IWMAuthorizer *cert) {
    return This->lpVtbl->WMSC_AddCertificate(This,cert);
}
static FORCEINLINE HRESULT IWMSecureChannel_WMSC_AddSignature(IWMSecureChannel* This,BYTE *signature,DWORD size) {
    return This->lpVtbl->WMSC_AddSignature(This,signature,size);
}
static FORCEINLINE HRESULT IWMSecureChannel_WMSC_Connect(IWMSecureChannel* This,IWMSecureChannel *peer) {
    return This->lpVtbl->WMSC_Connect(This,peer);
}
static FORCEINLINE HRESULT IWMSecureChannel_WMSC_IsConnected(IWMSecureChannel* This,WINBOOL *connected) {
    return This->lpVtbl->WMSC_IsConnected(This,connected);
}
static FORCEINLINE HRESULT IWMSecureChannel_WMSC_Disconnect(IWMSecureChannel* This) {
    return This->lpVtbl->WMSC_Disconnect(This);
}
static FORCEINLINE HRESULT IWMSecureChannel_WMSC_GetValidCertificate(IWMSecureChannel* This,BYTE **cert,DWORD *signature) {
    return This->lpVtbl->WMSC_GetValidCertificate(This,cert,signature);
}
static FORCEINLINE HRESULT IWMSecureChannel_WMSC_Encrypt(IWMSecureChannel* This,BYTE *data,DWORD size) {
    return This->lpVtbl->WMSC_Encrypt(This,data,size);
}
static FORCEINLINE HRESULT IWMSecureChannel_WMSC_Decrypt(IWMSecureChannel* This,BYTE *data,DWORD size) {
    return This->lpVtbl->WMSC_Decrypt(This,data,size);
}
static FORCEINLINE HRESULT IWMSecureChannel_WMSC_Lock(IWMSecureChannel* This) {
    return This->lpVtbl->WMSC_Lock(This);
}
static FORCEINLINE HRESULT IWMSecureChannel_WMSC_Unlock(IWMSecureChannel* This) {
    return This->lpVtbl->WMSC_Unlock(This);
}
static FORCEINLINE HRESULT IWMSecureChannel_WMSC_SetSharedData(IWMSecureChannel* This,DWORD index,BYTE *data) {
    return This->lpVtbl->WMSC_SetSharedData(This,index,data);
}
#endif
#endif

#endif


#endif  /* __IWMSecureChannel_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWMGetSecureChannel interface
 */
#ifndef __IWMGetSecureChannel_INTERFACE_DEFINED__
#define __IWMGetSecureChannel_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWMGetSecureChannel, 0x94bc0598, 0xc3d2, 0x11d3, 0xbe,0xdf, 0x00,0xc0,0x4f,0x61,0x29,0x86);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("94bc0598-c3d2-11d3-bedf-00c04f612986")
IWMGetSecureChannel : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetPeerSecureChannelInterface(
        IWMSecureChannel **channel) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWMGetSecureChannel, 0x94bc0598, 0xc3d2, 0x11d3, 0xbe,0xdf, 0x00,0xc0,0x4f,0x61,0x29,0x86)
#endif
#else
typedef struct IWMGetSecureChannelVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWMGetSecureChannel *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWMGetSecureChannel *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWMGetSecureChannel *This);

    /*** IWMGetSecureChannel methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPeerSecureChannelInterface)(
        IWMGetSecureChannel *This,
        IWMSecureChannel **channel);

    END_INTERFACE
} IWMGetSecureChannelVtbl;

interface IWMGetSecureChannel {
    CONST_VTBL IWMGetSecureChannelVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWMGetSecureChannel_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWMGetSecureChannel_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWMGetSecureChannel_Release(This) (This)->lpVtbl->Release(This)
/*** IWMGetSecureChannel methods ***/
#define IWMGetSecureChannel_GetPeerSecureChannelInterface(This,channel) (This)->lpVtbl->GetPeerSecureChannelInterface(This,channel)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IWMGetSecureChannel_QueryInterface(IWMGetSecureChannel* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IWMGetSecureChannel_AddRef(IWMGetSecureChannel* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IWMGetSecureChannel_Release(IWMGetSecureChannel* This) {
    return This->lpVtbl->Release(This);
}
/*** IWMGetSecureChannel methods ***/
static FORCEINLINE HRESULT IWMGetSecureChannel_GetPeerSecureChannelInterface(IWMGetSecureChannel* This,IWMSecureChannel **channel) {
    return This->lpVtbl->GetPeerSecureChannelInterface(This,channel);
}
#endif
#endif

#endif


#endif  /* __IWMGetSecureChannel_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __wmsecure_h__ */
