/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNThreadEncryptionKeyStoring, OS_dispatch_queue;
@class FBAnalytics, NSData, NSObject, NSMutableDictionary;

@interface MNThreadEncryptionKeyResolver : NSObject {

	id<MNThreadEncryptionKeyStoring> _encryptionKeyDataSource;
	FBAnalytics* _analytics;
	NSData* _masterKey;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _threadKeyEncryptionKeyMapping;

}
-(id)initWithEncryptionKeyDataSource:(id)arg1 analytics:(id)arg2 masterKey:(id)arg3 queue:(id)arg4 ;
-(id)encryptionKeyForThread:(id)arg1 ;
-(id)wrappedEncryptionKeyForThread:(id)arg1 ;
-(void)purgeEncryptionKeyForThread:(id)arg1 ;
@end

