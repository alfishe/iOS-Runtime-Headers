/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, GKChallengeInternal, NSSet, NSDate;

@interface GKChallenge : NSObject <NSCoding> {
    GKChallengeInternal *_internal;
    NSSet *_compatibleGames;
}

@property(copy) NSString * issuingPlayerID;
@property(copy) NSString * receivingPlayerID;
@property int state;
@property(retain) NSDate * issueDate;
@property(retain) NSDate * completionDate;
@property(copy) NSString * message;
@property(retain) GKChallengeInternal * internal;
@property(retain) NSSet * compatibleGames;
@property(readonly) NSString * challengeID;
@property(readonly) NSString * bundleID;

+ (void)loadReceivedChallengesWithCompletionHandler:(id)arg1;
+ (void)loadChallengesForReceivingPlayer:(id)arg1 withCompletionHandler:(id)arg2;
+ (id)challengeForGame:(id)arg1 andPlayer:(id)arg2 withAchievement:(id)arg3;
+ (id)challengeForGame:(id)arg1 andPlayer:(id)arg2 withScore:(id)arg3;
+ (void)loadChallengesForGame:(id)arg1 receivingPlayer:(id)arg2 withCompletionHandler:(id)arg3;
+ (id)challengeForInternalRepresentation:(id)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)stringForState:(int)arg1;

- (id)titleTextForAuxData:(id)arg1;
- (id)infoTextForIssuingPlayer:(id)arg1;
- (id)goalTextForAuxData:(id)arg1;
- (void)loadAuxDataWithHandler:(id)arg1;
- (void)setCompatibleGames:(id)arg1;
- (id)compatibleGames;
- (void)decline;
- (void)issueToPlayers:(id)arg1 message:(id)arg2;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)setInternal:(id)arg1;
- (id)identifierKey;
- (id)resolveBundleID;
- (id)internal;
- (BOOL)respondsToSelector:(SEL)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end
