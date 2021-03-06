/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSNumber;

@interface FBQuicksilverPlayerInfo : FBValueObject <NSCopying> {

	NSString* _userId;
	NSString* _name;
	NSString* _shortName;
	NSURL* _profileImageURL;
	NSNumber* _allTimeHighScore;
	NSNumber* _threadHighScore;
	NSString* _allTimeHighScoreString;
	NSString* _threadHighScoreString;

}

@property (nonatomic,copy,readonly) NSString * userId;                              //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortName;                           //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,copy,readonly) NSURL * profileImageURL;                        //@synthesize profileImageURL=_profileImageURL - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * allTimeHighScore;                    //@synthesize allTimeHighScore=_allTimeHighScore - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * threadHighScore;                     //@synthesize threadHighScore=_threadHighScore - In the implementation block
@property (nonatomic,copy,readonly) NSString * allTimeHighScoreString;              //@synthesize allTimeHighScoreString=_allTimeHighScoreString - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadHighScoreString;               //@synthesize threadHighScoreString=_threadHighScoreString - In the implementation block
-(NSNumber *)allTimeHighScore;
-(NSNumber *)threadHighScore;
-(NSString *)threadHighScoreString;
-(NSString *)allTimeHighScoreString;
-(id)initWithUserId:(id)arg1 name:(id)arg2 shortName:(id)arg3 profileImageURL:(id)arg4 allTimeHighScore:(id)arg5 threadHighScore:(id)arg6 allTimeHighScoreString:(id)arg7 threadHighScoreString:(id)arg8 ;
-(NSString *)name;
-(NSURL *)profileImageURL;
-(NSString *)shortName;
-(NSString *)userId;
@end

