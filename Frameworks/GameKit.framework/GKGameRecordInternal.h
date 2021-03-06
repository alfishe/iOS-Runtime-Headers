/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKScoreInternal, NSString, NSDate, GKGameInternal;

@interface GKGameRecordInternal : GKInternalRepresentation  {
    GKGameInternal *_game;
    NSDate *_lastPlayedDate;
    NSDate *_purchaseDate;
    unsigned int _achievements;
    unsigned int _achievementPoints;
    unsigned int _rank;
    unsigned int _maxRank;
    unsigned int _friendRank;
    unsigned int _maxFriendRank;
    GKScoreInternal *_score;
    float _rating;
    NSString *_categoryID;
    BOOL _valid;
}

@property(retain) GKGameInternal * game;
@property(retain) NSDate * lastPlayedDate;
@property(retain) NSDate * purchaseDate;
@property unsigned int achievements;
@property unsigned int achievementPoints;
@property unsigned int rank;
@property unsigned int maxRank;
@property unsigned int friendRank;
@property unsigned int maxFriendRank;
@property(retain) GKScoreInternal * score;
@property float rating;
@property(retain) NSString * categoryID;
@property(getter=isValid) BOOL valid;

+ (id)codedPropertyKeys;

- (void)setRating:(float)arg1;
- (float)rating;
- (void)setMaxFriendRank:(unsigned int)arg1;
- (unsigned int)maxFriendRank;
- (void)setFriendRank:(unsigned int)arg1;
- (unsigned int)friendRank;
- (void)setMaxRank:(unsigned int)arg1;
- (void)setAchievementPoints:(unsigned int)arg1;
- (void)setPurchaseDate:(id)arg1;
- (id)purchaseDate;
- (void)setLastPlayedDate:(id)arg1;
- (void)setValid:(BOOL)arg1;
- (unsigned int)maxRank;
- (id)lastPlayedDate;
- (void)setScore:(id)arg1;
- (id)score;
- (unsigned int)achievementPoints;
- (void)setAchievements:(unsigned int)arg1;
- (unsigned int)achievements;
- (id)categoryID;
- (void)setCategoryID:(id)arg1;
- (void)setGame:(id)arg1;
- (id)game;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (BOOL)isValid;
- (void)setRank:(unsigned int)arg1;
- (unsigned int)rank;

@end
