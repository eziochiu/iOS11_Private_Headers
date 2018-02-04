/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSPresentViewControllerRowAction : PTSRowAction {
    id /* block */  _viewControllerCreator;
}

@property (nonatomic, copy) id /* block */ viewControllerCreator;

+ (id)actionWithViewControllerCreator:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setViewControllerCreator:(id /* block */)arg1;
- (id /* block */)viewControllerCreator;

@end
