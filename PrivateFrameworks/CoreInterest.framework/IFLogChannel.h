/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
 */

@interface IFLogChannel : NSObject {
    int  _logLevel;
    NSString * _name;
}

@property int logLevel;
@property (retain) NSString *name;

+ (id)defaultChannel;
+ (id)persistenceChannel;
+ (id)sharedLogChannelWithName:(id)arg1;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1;
- (int)logLevel;
- (id)name;
- (void)setLogLevel:(int)arg1;
- (void)setLogLevelFromDefaults;
- (void)setName:(id)arg1;

@end
