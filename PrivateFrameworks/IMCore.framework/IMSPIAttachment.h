/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMSPIAttachment : NSObject {
    long long  _fileTransferState;
    NSURL * _fileUrl;
}

@property long long fileTransferState;
@property (retain) NSURL *fileUrl;

- (void).cxx_destruct;
- (id)description;
- (long long)fileTransferState;
- (id)fileUrl;
- (id)initWithFileUrl:(id)arg1 transferState:(long long)arg2;
- (void)setFileTransferState:(long long)arg1;
- (void)setFileUrl:(id)arg1;

@end