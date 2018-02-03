/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLock : NSObject <NSLocking> {
    void * _priv;
}

@property (copy) NSString *name;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)lock;
- (bool)lockBeforeDate:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (bool)tryLock;
- (void)unlock;

@end
