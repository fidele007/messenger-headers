/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSString, EGODatabaseStatement;

@interface EGODatabase : NSObject {

	NSString* databasePath;
	BOOL opened;
	EGODatabaseStatement* beginStatement_;
	EGODatabaseStatement* rollbackStatement_;
	EGODatabaseStatement* commitStatement_;
	long long _fileProtection;
	sqlite3Ref handle;

}

@property (nonatomic,retain) EGODatabaseStatement * beginStatement; 
@property (nonatomic,retain) EGODatabaseStatement * rollbackStatement; 
@property (nonatomic,retain) EGODatabaseStatement * commitStatement; 
@property (nonatomic,readonly) sqlite3Ref sqliteHandle; 
-(void)finalizeStatementsAndClose:(id)arg1 ;
-(BOOL)executeUpdateStatements:(id)arg1 parameterLists:(id)arg2 error:(id*)arg3 ;
-(id)executeQueryStatement:(id)arg1 parameters:(id)arg2 ;
-(id)executeQueryStatement:(id)arg1 parameters:(id)arg2 error:(id*)arg3 ;
-(id)initWithPath:(id)arg1 fileProtection:(long long)arg2 ;
-(BOOL)executeMultiStatement:(id)arg1 error:(id*)arg2 ;
-(id)executeQuery:(id)arg1 parameters:(id)arg2 error:(id*)arg3 ;
-(BOOL)executeUpdateStatement:(id)arg1 parameters:(id)arg2 ;
-(id)executeQuery:(id)arg1 parameters:(id)arg2 ;
-(BOOL)executeMultiStatement:(id)arg1 ;
-(BOOL)executeUpdate:(id)arg1 parameters:(id)arg2 ;
-(BOOL)executeUpdateStatements:(id)arg1 parameterLists:(id)arg2 inOperation:(id)arg3 error:(id*)arg4 ;
-(id)executeQueryWithParameters:(id)arg1 ;
-(id)lastDBErrorForDomain:(id)arg1 ;
-(void)setBeginStatement:(EGODatabaseStatement *)arg1 ;
-(EGODatabaseStatement *)beginStatement;
-(void)setRollbackStatement:(EGODatabaseStatement *)arg1 ;
-(EGODatabaseStatement *)rollbackStatement;
-(void)setCommitStatement:(EGODatabaseStatement *)arg1 ;
-(EGODatabaseStatement *)commitStatement;
-(BOOL)executeSingleUpdateStatement:(id)arg1 parameters:(id)arg2 error:(id*)arg3 ;
-(sqlite3Ref)sqliteHandle;
-(BOOL)executeSingleUpdateStatement:(id)arg1 error:(id*)arg2 ;
-(void)interruptCurrentOperation;
-(BOOL)executeUpdateWithParameters:(id)arg1 ;
-(void)dealloc;
-(void)close;
-(id)open;
-(BOOL)executeUpdate:(id)arg1 ;
-(id)executeQuery:(id)arg1 ;
-(id)lastErrorMessage;
-(int)lastErrorCode;
-(BOOL)hadError;
-(BOOL)finalizeStatement:(id)arg1 ;
@end
