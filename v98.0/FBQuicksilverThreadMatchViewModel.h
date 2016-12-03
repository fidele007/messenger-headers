/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBQuicksilverPlayerInfo, NSArray;

@interface FBQuicksilverThreadMatchViewModel : FBValueObject <NSCopying> {

	NSString* _threadID;
	FBQuicksilverPlayerInfo* _playerInfo;
	NSArray* _opponentsInfo;

}

@property (nonatomic,copy,readonly) NSString * threadID;                               //@synthesize threadID=_threadID - In the implementation block
@property (nonatomic,copy,readonly) FBQuicksilverPlayerInfo * playerInfo;              //@synthesize playerInfo=_playerInfo - In the implementation block
@property (nonatomic,copy,readonly) NSArray * opponentsInfo;                           //@synthesize opponentsInfo=_opponentsInfo - In the implementation block
-(NSArray *)opponentsInfo;
-(id)initWithThreadID:(id)arg1 playerInfo:(id)arg2 opponentsInfo:(id)arg3 ;
-(FBQuicksilverPlayerInfo *)playerInfo;
-(NSString *)threadID;
@end
