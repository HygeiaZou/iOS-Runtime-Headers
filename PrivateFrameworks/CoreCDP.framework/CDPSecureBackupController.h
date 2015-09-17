/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@interface CDPSecureBackupController : NSObject {
    CDPContext *_context;
}

@property (nonatomic, readonly) CDPContext *context;

- (void).cxx_destruct;
- (int)_circleStatus;
- (id)_clientMetadataWithSecretType:(unsigned int)arg1 length:(unsigned int)arg2;
- (id)_dateWithSecureBackupDateString:(id)arg1;
- (void)_enableSecureBackupWithSecret:(id)arg1 secretType:(unsigned int)arg2 useCachedSecret:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)_recoverSecureBackupWithSecret:(id)arg1 isSilentAttempt:(BOOL)arg2 device:(id)arg3 useCachedSecret:(BOOL)arg4 completion:(id /* block */)arg5;
- (id)_sanitizedInfoDictionary:(id)arg1;
- (void)attemptSilentRecoveryWithLocalSecret:(id)arg1 useCachedSecret:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)backupRecordsArePresentWithCompletion:(id /* block */)arg1;
- (id)context;
- (void)deleteAllBackupRecordsWithCompletion:(id /* block */)arg1;
- (void)disableSecureBackupWithCompletion:(id /* block */)arg1;
- (void)enableSecureBackupWithSecret:(id)arg1 secretType:(unsigned int)arg2 useCachedSecret:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)getBackupRecordDevicesWithCompletion:(id /* block */)arg1;
- (id)initWithContext:(id)arg1;
- (void)isAccountLockedWithCompletiom:(id /* block */)arg1;
- (void)isEligibleForCDPWithUIProvider:(id)arg1 completion:(id /* block */)arg2;
- (void)lockAccountOutWithCompletion:(id /* block */)arg1;
- (void)recoverSecureBackupWithSecret:(id)arg1 device:(id)arg2 completion:(id /* block */)arg3;

@end