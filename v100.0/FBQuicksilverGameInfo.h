/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBQuicksilverGameInfo : FBValueObject <NSCopying> {

	NSString* _gameAppID;
	NSString* _gameURLString;
	NSString* _splashImageURLString;
	NSString* _threadFBID_doNotUse;
	NSString* _gameOrientation;
	NSString* _gameName;
	NSString* _appIconURLString;
	NSString* _displayURLString;
	NSString* _gameDescription;
	NSString* _gameBannerImageUriString;
	long long _gameScoreStrategy;

}

@property (nonatomic,copy,readonly) NSString * gameAppID;                             //@synthesize gameAppID=_gameAppID - In the implementation block
@property (nonatomic,copy,readonly) NSString * gameURLString;                         //@synthesize gameURLString=_gameURLString - In the implementation block
@property (nonatomic,copy,readonly) NSString * splashImageURLString;                  //@synthesize splashImageURLString=_splashImageURLString - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadFBID_doNotUse;                   //@synthesize threadFBID_doNotUse=_threadFBID_doNotUse - In the implementation block
@property (nonatomic,copy,readonly) NSString * gameOrientation;                       //@synthesize gameOrientation=_gameOrientation - In the implementation block
@property (nonatomic,copy,readonly) NSString * gameName;                              //@synthesize gameName=_gameName - In the implementation block
@property (nonatomic,copy,readonly) NSString * appIconURLString;                      //@synthesize appIconURLString=_appIconURLString - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayURLString;                      //@synthesize displayURLString=_displayURLString - In the implementation block
@property (nonatomic,copy,readonly) NSString * gameDescription;                       //@synthesize gameDescription=_gameDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * gameBannerImageUriString;              //@synthesize gameBannerImageUriString=_gameBannerImageUriString - In the implementation block
@property (nonatomic,readonly) long long gameScoreStrategy;                           //@synthesize gameScoreStrategy=_gameScoreStrategy - In the implementation block
-(NSString *)gameAppID;
-(long long)gameScoreStrategy;
-(NSString *)gameURLString;
-(NSString *)splashImageURLString;
-(NSString *)gameOrientation;
-(id)initWithGameAppID:(id)arg1 gameURLString:(id)arg2 splashImageURLString:(id)arg3 threadFBID_doNotUse:(id)arg4 gameOrientation:(id)arg5 gameName:(id)arg6 appIconURLString:(id)arg7 displayURLString:(id)arg8 gameDescription:(id)arg9 gameBannerImageUriString:(id)arg10 gameScoreStrategy:(long long)arg11 ;
-(NSString *)gameBannerImageUriString;
-(NSString *)appIconURLString;
-(NSString *)gameDescription;
-(NSString *)threadFBID_doNotUse;
-(NSString *)displayURLString;
-(NSString *)gameName;
@end

