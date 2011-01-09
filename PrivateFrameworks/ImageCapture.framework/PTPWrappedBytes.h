/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */



@interface PTPWrappedBytes : NSObject 
{
    unsigned long long _offset;
    unsigned long long _capacity;
    BOOL _allocatedBytes;
    char *_bytes;
    NSInteger _fd;
    BOOL _useByteBuffer;
    unsigned long long _excessDataLength;
}

+ (id)wrappedBytesWithBytes:(void*)arg1 capacity64:(unsigned long long)arg2;
+ (id)wrappedBytesWithCapacity64:(unsigned long long)arg1;

- (unsigned long long)setCapacity64:(unsigned long long)arg1;
- (unsigned long long)excessDataLength;
- (id)initWithCapacity64:(unsigned long long)arg1;
- (unsigned long long)length64;
- (unsigned long long)appendBytes:(const void*)arg1 length64:(unsigned long long)arg2;
- (BOOL)wasInitWithFD;
- (double)percentFull;
- (unsigned long long)capacity64;
- (void)setLength64:(unsigned long long)arg1;
- (id)initWithBytes:(void*)arg1 capacity64:(unsigned long long)arg2;
- (id)initWithFileDescriptor:(NSInteger)arg1 capacity64:(unsigned long long)arg2;
- (void*)mutableBytes;
- (unsigned long long)appendData:(id)arg1;
- (id)description;
- (const void*)bytes;
- (id)init;
- (void)dealloc;

@end