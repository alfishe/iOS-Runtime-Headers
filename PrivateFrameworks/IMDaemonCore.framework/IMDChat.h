/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@class FZMessage, IMDService, NSRecursiveLock, IMDAccount, NSDictionary, NSString, IMDServiceSession, NSMutableDictionary, NSArray;

@interface IMDChat : NSObject  {
    NSRecursiveLock *_lock;
    NSString *_accountID;
    NSString *_serviceName;
    NSDictionary *_properties;
    NSString *_chatIdentifier;
    NSString *_guid;
    NSString *_roomName;
    NSString *_lastAddressedLocalHandle;
    NSArray *_participants;
    FZMessage *_lastMessage;
    int _state;
    unsigned char _style;
    unsigned int _unreadCount;
    unsigned int _failedCount;
    int _isArchived;
    int _rowIDOfMostRecentFailedMessage;
}

@property(copy) NSString * guid;
@property(copy) NSString * chatIdentifier;
@property(copy) NSString * accountID;
@property(copy) NSString * serviceName;
@property(copy) NSArray * participants;
@property unsigned char style;
@property int state;
@property unsigned int unreadCount;
@property unsigned int failedCount;
@property int rowIDOfMostRecentFailedMessage;
@property(copy) NSString * roomName;
@property(readonly) IMDServiceSession * serviceSession;
@property(readonly) IMDAccount * account;
@property(readonly) IMDService * service;
@property(retain) NSDictionary * properties;
@property(retain) FZMessage * lastMessage;
@property(copy) NSString * lastAddressedLocalHandle;
@property(readonly) NSDictionary * dictionaryRepresentation;
@property(readonly) NSDictionary * chatProperties;
@property(readonly) int isArchived;
@property(readonly) NSMutableDictionary * copyDictionaryRepresentation;


- (void)setParticipants:(id)arg1;
- (id)participants;
- (id)guid;
- (int)state;
- (void)setProperties:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)properties;
- (id)dictionaryRepresentation;
- (unsigned char)style;
- (void)setStyle:(unsigned char)arg1;
- (void)setState:(int)arg1;
- (void)setRoomName:(id)arg1;
- (int)rowIDOfMostRecentFailedMessage;
- (void)_setRowIDOfMostRecentFailedMessage:(int)arg1;
- (id)roomName;
- (id)chatIdentifier;
- (id)lastAddressedLocalHandle;
- (void)_setFailedCount:(unsigned int)arg1;
- (int)isArchived;
- (void)_setUnreadCount:(unsigned int)arg1;
- (void)updateProperties:(id)arg1;
- (void)_updateLastMessage:(id)arg1;
- (id)chatProperties;
- (id)serviceSession;
- (void)removeParticipant:(id)arg1;
- (void)addParticipant:(id)arg1;
- (id)initWithAccountID:(id)arg1 service:(id)arg2 guid:(id)arg3 chatIdentifier:(id)arg4 participants:(id)arg5 roomName:(id)arg6 lastAddressedLocalHandle:(id)arg7 state:(int)arg8 style:(unsigned char)arg9;
- (void)setLastMessage:(id)arg1;
- (unsigned int)failedCount;
- (void)removeParticipants:(id)arg1;
- (void)addParticipants:(id)arg1;
- (void)setChatIdentifier:(id)arg1;
- (void)setLastAddressedLocalHandle:(id)arg1;
- (id)serviceName;
- (id)lastMessage;
- (id)service;
- (id)copyDictionaryRepresentation;
- (id)accountID;
- (void)setServiceName:(id)arg1;
- (unsigned int)unreadCount;
- (id)account;
- (void)setGuid:(id)arg1;
- (void)setAccountID:(id)arg1;

@end
