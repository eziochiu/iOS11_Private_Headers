/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPApplication : NSObject <NSSecureCoding> {
    NSURL * _URL;
    NSString * _displayIdentifier;
    NSString * _displayName;
    bool  _isWebClip;
    NSMutableArray * _keywords;
    NSString * _longDisplayName;
    NSString * _shortVersion;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, retain) NSString *displayIdentifier;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic) bool isWebClip;
@property (nonatomic, retain) NSMutableArray *keywords;
@property (nonatomic, retain) NSString *longDisplayName;
@property (nonatomic, retain) NSString *shortVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (void)copySearchFoundationResult:(id)arg1;
- (id)description;
- (id)displayIdentifier;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isWebClip;
- (id)keywords;
- (id)longDisplayName;
- (void)setDisplayIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setIsWebClip:(bool)arg1;
- (void)setKeywords:(id)arg1;
- (void)setLongDisplayName:(id)arg1;
- (void)setShortVersion:(id)arg1;
- (void)setURL:(id)arg1;
- (id)shortVersion;

@end
