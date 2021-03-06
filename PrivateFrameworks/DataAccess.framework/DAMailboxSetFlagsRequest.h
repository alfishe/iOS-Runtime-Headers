/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface DAMailboxSetFlagsRequest : DAMailboxRequest  {
    unsigned long long _onFlags;
    unsigned long long _offFlags;
    NSString *_messageID;
}


- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (unsigned long long)offFlags;
- (unsigned long long)onFlags;
- (id)initRequestWithSetFlags:(unsigned long long)arg1 unsetFlags:(unsigned long long)arg2 message:(id)arg3;
- (id)messageID;

@end
