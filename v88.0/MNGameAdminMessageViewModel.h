/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, UIColor;

@interface MNGameAdminMessageViewModel : FBValueObject <NSCopying> {

	NSString* _gameAppID;
	NSString* _threadFBID;
	NSString* _gameUpdateSummary;
	NSString* _unfoldCTA;
	NSString* _gameName;
	NSString* _gameImageUri;
	NSArray* _leaderboardItems;
	NSString* _playCTA;
	UIColor* _themeColor;

}

@property (nonatomic,copy,readonly) NSString * gameAppID;                      //@synthesize gameAppID=_gameAppID - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadFBID;                     //@synthesize threadFBID=_threadFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * gameUpdateSummary;              //@synthesize gameUpdateSummary=_gameUpdateSummary - In the implementation block
@property (nonatomic,copy,readonly) NSString * unfoldCTA;                      //@synthesize unfoldCTA=_unfoldCTA - In the implementation block
@property (nonatomic,copy,readonly) NSString * gameName;                       //@synthesize gameName=_gameName - In the implementation block
@property (nonatomic,copy,readonly) NSString * gameImageUri;                   //@synthesize gameImageUri=_gameImageUri - In the implementation block
@property (nonatomic,copy,readonly) NSArray * leaderboardItems;                //@synthesize leaderboardItems=_leaderboardItems - In the implementation block
@property (nonatomic,copy,readonly) NSString * playCTA;                        //@synthesize playCTA=_playCTA - In the implementation block
@property (nonatomic,copy,readonly) UIColor * themeColor;                      //@synthesize themeColor=_themeColor - In the implementation block
-(NSString *)threadFBID;
-(UIColor *)themeColor;
-(NSString *)gameAppID;
-(NSArray *)leaderboardItems;
-(NSString *)gameUpdateSummary;
-(NSString *)unfoldCTA;
-(NSString *)gameImageUri;
-(NSString *)playCTA;
-(id)initWithGameAppID:(id)arg1 threadFBID:(id)arg2 gameUpdateSummary:(id)arg3 unfoldCTA:(id)arg4 gameName:(id)arg5 gameImageUri:(id)arg6 leaderboardItems:(id)arg7 playCTA:(id)arg8 themeColor:(id)arg9 ;
-(NSString *)gameName;
@end

