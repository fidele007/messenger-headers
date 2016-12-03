/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNMessagesSyncThreadKey, NSString;

@interface MNMessagesSyncDeltaThreadFolder : NSObject <TBase, NSCoding> {

	MNMessagesSyncThreadKey* __threadKey;
	int __folder;
	BOOL __threadKey_isset;
	BOOL __folder_isset;

}

@property (setter=setThreadKey:,getter=threadKey,nonatomic,retain) MNMessagesSyncThreadKey * threadKey; 
@property (assign,setter=setFolder:,getter=folder,nonatomic) int folder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setThreadKey:(MNMessagesSyncThreadKey *)arg1 ;
-(void)read:(id)arg1 ;
-(BOOL)threadKeyIsSet;
-(BOOL)folderIsSet;
-(void)unsetFolder;
-(void)unsetThreadKey;
-(id)initWithThreadKey:(id)arg1 folder:(int)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)validate;
-(MNMessagesSyncThreadKey *)threadKey;
-(int)folder;
-(void)setFolder:(int)arg1 ;
-(void)write:(id)arg1 ;
@end

