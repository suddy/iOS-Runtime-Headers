/* Generated by RuntimeBrowser.
 */

@protocol FBUISceneClientWorkspace <NSObject>

@required

- (void)beginTransaction;
- (<FBUISceneClient> *)clientForSceneIdentifier:(NSString *)arg1;
- (FBUISceneClientIdentity *)clientIdentity;
- (<FBUIProcess> *)clientProcess;
- (void)endTransaction;

@end
