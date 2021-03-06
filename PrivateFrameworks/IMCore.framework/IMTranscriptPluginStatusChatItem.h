/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMTranscriptPluginStatusChatItem : IMMessageStatusChatItem {
    IMBalloonPluginDataSource * _dataSource;
}

@property (nonatomic, readonly) IMBalloonPluginDataSource *dataSource;

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 dataSource:(id)arg2;
- (id)dataSource;

@end
