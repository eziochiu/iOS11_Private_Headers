/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMLogDump : NSObject {
    NSObject<OS_dispatch_queue> * _logDumpQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *logDumpQueue;

+ (id)sharedInstance;

- (bool)_checkArgumentValidity:(id)arg1 withFileName:(id)arg2 withError:(id*)arg3;
- (void)_compressAndDeleteFileAtPath:(id)arg1 destinationFilePath:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)_lastHoursToAppend:(int)arg1;
- (id)_predicateToAppend:(id)arg1;
- (void)dealloc;
- (void)dumpLogsToFolderAtPath:(id)arg1 withFileName:(id)arg2 lastHours:(int)arg3 predicate:(id)arg4 shouldCompress:(bool)arg5 withCompletion:(id /* block */)arg6;
- (id)init;
- (id)logDumpQueue;

@end
