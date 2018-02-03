/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcretePointerFunctions : NSPointerFunctions {
    struct NSSlice { 
        void **items; 
        bool wantsStrong; 
        bool wantsWeak; 
        bool wantsARC; 
        bool shouldCopyIn; 
        bool usesStrong; 
        bool usesWeak; 
        bool usesARC; 
        bool usesSentinel; 
        bool pointerPersonality; 
        bool integerPersonality; 
        bool simpleReadClear; 
        int (*sizeFunction)(); 
        int (*hashFunction)(); 
        int (*isEqualFunction)(); 
        int (*describeFunction)(); 
        int (*acquireFunction)(); 
        int (*relinquishFunction)(); 
        int (*allocateFunction)(); 
        int (*freeFunction)(); 
        int (*readAt)(); 
        int (*clearAt)(); 
        int (*storeAt)(); 
    }  slice;
}

+ (void)initializeBackingStore:(struct NSSlice { void **x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); int (*x20)(); int (*x21)(); int (*x22)(); int (*x23)(); }*)arg1 sentinel:(bool)arg2;
+ (bool)initializeSlice:(struct NSSlice { void **x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); int (*x20)(); int (*x21)(); int (*x22)(); int (*x23)(); }*)arg1 withOptions:(unsigned long long)arg2;

- (int (*)acquireFunction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int (*)descriptionFunction;
- (unsigned long long)hash;
- (int (*)hashFunction;
- (id)initWithOptions:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (int (*)isEqualFunction;
- (int (*)relinquishFunction;
- (void)setAcquireFunction:(int (*)arg1;
- (void)setDescriptionFunction:(int (*)arg1;
- (void)setHashFunction:(int (*)arg1;
- (void)setIsEqualFunction:(int (*)arg1;
- (void)setRelinquishFunction:(int (*)arg1;
- (void)setSizeFunction:(int (*)arg1;
- (void)setUsesStrongWriteBarrier:(bool)arg1;
- (void)setUsesWeakReadAndWriteBarriers:(bool)arg1;
- (int (*)sizeFunction;
- (bool)usesStrongWriteBarrier;
- (bool)usesWeakReadAndWriteBarriers;

@end