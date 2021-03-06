/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextElementEvent : NSObject <NSCopying> {
    double  _duration;
    NTKUpNextElement * _element;
    NSIndexPath * _indexPath;
    unsigned long long  _type;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NTKUpNextElement *element;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) unsigned long long type;

+ (id)elementVisible:(id)arg1 indexPath:(id)arg2 duration:(double)arg3;
+ (id)eventForElement:(id)arg1 withType:(unsigned long long)arg2 indexPath:(id)arg3 duration:(double)arg4;
+ (id)negativeFeedbackForEvent:(id)arg1 indexPath:(id)arg2;
+ (id)positiveFeedbackForEvent:(id)arg1 indexPath:(id)arg2;
+ (id)scrolledEvent;
+ (id)tapEventForElement:(id)arg1 indexPath:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)duration;
- (id)element;
- (unsigned long long)hash;
- (id)indexPath;
- (bool)isEqual:(id)arg1;
- (unsigned long long)type;

@end
