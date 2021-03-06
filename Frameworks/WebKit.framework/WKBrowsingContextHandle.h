/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKBrowsingContextHandle : NSObject <NSSecureCoding> {
    unsigned long long  _pageID;
}

@property (getter=_pageID, nonatomic, readonly) unsigned long long pageID;

+ (bool)supportsSecureCoding;

- (id)_initWithPageID:(unsigned long long)arg1;
- (unsigned long long)_pageID;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
