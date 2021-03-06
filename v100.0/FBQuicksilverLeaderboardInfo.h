/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBQuicksilverPlayerInfo, NSArray;

@interface FBQuicksilverLeaderboardInfo : FBValueObject <NSCopying> {

	FBQuicksilverPlayerInfo* _viewerPlayerInfo;
	NSArray* _topPlayers;
	NSArray* _friends;

}

@property (nonatomic,copy,readonly) FBQuicksilverPlayerInfo * viewerPlayerInfo;              //@synthesize viewerPlayerInfo=_viewerPlayerInfo - In the implementation block
@property (nonatomic,copy,readonly) NSArray * topPlayers;                                    //@synthesize topPlayers=_topPlayers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * friends;                                       //@synthesize friends=_friends - In the implementation block
-(FBQuicksilverPlayerInfo *)viewerPlayerInfo;
-(id)initWithViewerPlayerInfo:(id)arg1 topPlayers:(id)arg2 friends:(id)arg3 ;
-(NSArray *)topPlayers;
-(NSArray *)friends;
@end

