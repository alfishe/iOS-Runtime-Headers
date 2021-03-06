/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKTileKeyMap;

@interface VKTileKeyList : NSObject <NSFastEnumeration, NSCopying> {
    void *_head;
    void *_tail;
    VKTileKeyMap *_map;
    unsigned int _count;
    unsigned int _maxCount;
}


- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)init;
- (unsigned int)count;
- (BOOL)containsKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)removeKeysMatchingPredicate:(id)arg1;
- (id)listWithout:(id)arg1;
- (unsigned int)capacity;
- (struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)firstKey;
- (id)copyWithMaxCapacity:(unsigned int)arg1;
- (BOOL)addKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 lostKey:(struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (void)_addKeyToBack:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (id)initWithMaxCapacity:(unsigned int)arg1;
- (void)addKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (BOOL)isEqualToList:(id)arg1;
- (BOOL)removeKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)sort:(id)arg1;

@end
