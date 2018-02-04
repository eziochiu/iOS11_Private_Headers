/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface _WBUPasswordPickerTableViewCell : UITableViewCell {
    WBSSavedPassword * _savedPassword;
    NSString * _searchPattern;
}

@property (nonatomic, readonly) WBSSavedPassword *savedPassword;
@property (nonatomic, readonly) NSString *searchPattern;

- (void).cxx_destruct;
- (id)savedPassword;
- (id)searchPattern;
- (void)setSavedPassword:(id)arg1 searchPattern:(id)arg2;
- (void)webui_copyPassword;
- (void)webui_copyUserName;

@end
