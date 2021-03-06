/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLCompilerResult : NSObject {
    NSArray * _outputFiles;
}

@property (retain) NSArray *outputFiles;

+ (id)resultWithOutputFiles:(id)arg1;

- (void).cxx_destruct;
- (id)outputFiles;
- (void)setOutputFiles:(id)arg1;

@end
