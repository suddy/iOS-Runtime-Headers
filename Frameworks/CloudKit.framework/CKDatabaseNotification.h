/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDatabaseNotification : CKNotification <NSSecureCoding> {
    long long  _databaseScope;
}

@property (nonatomic) long long databaseScope;

+ (bool)supportsSecureCoding;

- (id)CKPropertiesDescription;
- (long long)databaseScope;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRemoteNotificationDictionary:(id)arg1;
- (void)setDatabaseScope:(long long)arg1;

@end
