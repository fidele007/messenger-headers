/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSecureMessagingSessionCryptoStateStoring.h>

@protocol OS_dispatch_queue;
@class FBVersionedFileHandler, FBVersionedFileInfo, FBUserSession, EGODatabase, NSDictionary, FBVersionedEGODatabaseFileConfigurer, FBAnalytics, NSObject, NSString;

@interface MNSecureMessagingSessionCryptoStateStore : NSObject <MNSecureMessagingSessionCryptoStateStoring> {

	FBVersionedFileHandler* _fileHandler;
	FBVersionedFileInfo* _fileInfo;
	FBUserSession* _userSession;
	EGODatabase* _db;
	NSDictionary* _dbStatements;
	FBVersionedEGODatabaseFileConfigurer* _databaseConfiguerer;
	FBAnalytics* _analytics;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cryptoStateForThread:(id)arg1 ;
-(id)saveCryptoState:(id)arg1 forThreadWithKey:(id)arg2 ;
-(id)openStore;
-(void)deleteStoreFile;
-(id)deleteStateForThreadWithKey:(id)arg1 ;
-(id)deleteAllSessionState;
-(void)_createDBStatements;
-(id)initWithFileHandler:(id)arg1 userSession:(id)arg2 analytics:(id)arg3 queue:(id)arg4 ;
-(void)close;
@end
