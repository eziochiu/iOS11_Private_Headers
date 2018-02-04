/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXEventActionHandler : SXActionHandler <EKEventEditViewDelegate> {
    UIAlertAction * _copyAction;
    UIAlertAction * _createEventAction;
    UIAlertAction * _showInCalendarAction;
}

@property (nonatomic, readonly) UIAlertAction *copyAction;
@property (nonatomic, readonly) UIAlertAction *createEventAction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIAlertAction *showInCalendarAction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)alertActions;
- (bool)canShowInCalendar;
- (id)copyAction;
- (void)copyToPasteboard;
- (void)createEvent;
- (id)createEventAction;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (id)message;
- (void)showInCalendar;
- (id)showInCalendarAction;
- (id)title;

@end
