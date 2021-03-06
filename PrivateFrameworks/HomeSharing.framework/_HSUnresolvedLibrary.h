/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSNetService;

@interface _HSUnresolvedLibrary : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    NSNetService *_netService;
    struct _DNSServiceRef_t { } *_resolvingDNSService;
}


- (void)_netServiceDidNotResolve;
- (void)_netServiceDidResolveAddressWithTXTRecordData:(id)arg1 host:(struct hostent { char *x1; char **x2; int x3; int x4; char **x5; }*)arg2 port:(unsigned short)arg3;
- (void)_callAndInvalidateCompletionHandlerWithLibrary:(id)arg1;
- (void)_timeoutResolve;
- (void)resolveWithTimeout:(double)arg1 completionHandler:(id)arg2;
- (void)dealloc;
- (id)initWithNSNetService:(id)arg1;

@end
