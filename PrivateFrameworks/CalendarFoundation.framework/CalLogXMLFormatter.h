/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLogXMLFormatter : NSObject <CalLogFormatter> {
    bool  _shouldPrettyPrint;
    bool  _useTinyElementNames;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldPrettyPrint;
@property (readonly) Class superclass;
@property (nonatomic) bool useTinyElementNames;

- (id)init;
- (id)newFormattedString:(id)arg1;
- (void)setShouldPrettyPrint:(bool)arg1;
- (void)setUseTinyElementNames:(bool)arg1;
- (bool)shouldPrettyPrint;
- (bool)useTinyElementNames;

@end