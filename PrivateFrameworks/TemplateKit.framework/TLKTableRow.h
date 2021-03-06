/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKTableRow : TLKObject {
    NSArray * _data;
    bool  _isSubHeader;
}

@property (retain) NSArray *data;
@property bool isSubHeader;

- (void).cxx_destruct;
- (id)data;
- (bool)isSubHeader;
- (id)observableProperties;
- (void)setData:(id)arg1;
- (void)setIsSubHeader:(bool)arg1;

@end
