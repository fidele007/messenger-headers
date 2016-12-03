/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, NSString;

@interface MNMessagesSyncDeltaMarkRead : NSObject <TBase, NSCoding> {

	NSMutableArray* __threadKeys;
	NSMutableArray* __folders;
	long long __watermarkTimestamp;
	long long __actionTimestamp;
	BOOL __threadKeys_isset;
	BOOL __folders_isset;
	BOOL __watermarkTimestamp_isset;
	BOOL __actionTimestamp_isset;

}

@property (setter=setThreadKeys:,getter=threadKeys,nonatomic,retain) NSMutableArray * threadKeys; 
@property (setter=setFolders:,getter=folders,nonatomic,retain) NSMutableArray * folders; 
@property (assign,setter=setWatermarkTimestamp:,getter=watermarkTimestamp,nonatomic) long long watermarkTimestamp; 
@property (assign,setter=setActionTimestamp:,getter=actionTimestamp,nonatomic) long long actionTimestamp; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setWatermarkTimestamp:(long long)arg1 ;
-(long long)watermarkTimestamp;
-(BOOL)threadKeysIsSet;
-(NSMutableArray *)threadKeys;
-(BOOL)foldersIsSet;
-(void)setThreadKeys:(NSMutableArray *)arg1 ;
-(BOOL)watermarkTimestampIsSet;
-(void)unsetWatermarkTimestamp;
-(void)unsetThreadKeys;
-(void)unsetFolders;
-(void)setActionTimestamp:(long long)arg1 ;
-(id)initWithThreadKeys:(id)arg1 folders:(id)arg2 watermarkTimestamp:(long long)arg3 actionTimestamp:(long long)arg4 ;
-(long long)actionTimestamp;
-(BOOL)actionTimestampIsSet;
-(void)unsetActionTimestamp;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)validate;
-(NSMutableArray *)folders;
-(void)setFolders:(NSMutableArray *)arg1 ;
-(void)write:(id)arg1 ;
@end

