/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBQuicksilverPlayerInfoViewModel;

@interface FBQuicksilverPlayerInfoCellViewModel : FBValueObject <NSCopying> {

	BOOL _shouldShowRanking;
	BOOL _shouldShowPlayButton;
	FBQuicksilverPlayerInfoViewModel* _playerInfoViewModel;
	unsigned long long _ranking;

}

@property (nonatomic,copy,readonly) FBQuicksilverPlayerInfoViewModel * playerInfoViewModel;              //@synthesize playerInfoViewModel=_playerInfoViewModel - In the implementation block
@property (nonatomic,readonly) unsigned long long ranking;                                               //@synthesize ranking=_ranking - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowRanking;                                                   //@synthesize shouldShowRanking=_shouldShowRanking - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowPlayButton;                                                //@synthesize shouldShowPlayButton=_shouldShowPlayButton - In the implementation block
-(FBQuicksilverPlayerInfoViewModel *)playerInfoViewModel;
-(unsigned long long)ranking;
-(BOOL)shouldShowRanking;
-(id)initWithPlayerInfoViewModel:(id)arg1 ranking:(unsigned long long)arg2 shouldShowRanking:(BOOL)arg3 shouldShowPlayButton:(BOOL)arg4 ;
-(BOOL)shouldShowPlayButton;
@end
