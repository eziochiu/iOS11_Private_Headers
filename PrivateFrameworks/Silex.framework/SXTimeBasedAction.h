/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXTimeBasedAction : NSObject {
    id /* block */  _block;
    double  _time;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic) double time;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg1;
- (void)setTime:(double)arg1;
- (double)time;

@end
