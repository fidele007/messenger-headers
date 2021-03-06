/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSNumber, NSArray;

@interface FBBackstagePostsCreateInfo : FBGraphQLInput {

	NSString* _unpublishedMedia;
	NSString* _reactionTo;
	NSString* _threadId;
	NSString* _mediaType;
	NSString* _backstagePostType;
	NSString* _caption;
	NSString* _message;
	NSNumber* _exifTime;
	NSNumber* _timezoneOffsetSeconds;
	NSString* _location;
	NSArray* _specificUsers;
	NSString* _private;

}

@property (nonatomic,copy) NSString * unpublishedMedia;                   //@synthesize unpublishedMedia=_unpublishedMedia - In the implementation block
@property (nonatomic,copy) NSString * reactionTo;                         //@synthesize reactionTo=_reactionTo - In the implementation block
@property (nonatomic,copy) NSString * threadId;                           //@synthesize threadId=_threadId - In the implementation block
@property (nonatomic,copy) NSString * mediaType;                          //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy) NSString * backstagePostType;                  //@synthesize backstagePostType=_backstagePostType - In the implementation block
@property (nonatomic,copy) NSString * caption;                            //@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy) NSString * message;                            //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSNumber * exifTime;                           //@synthesize exifTime=_exifTime - In the implementation block
@property (nonatomic,copy) NSNumber * timezoneOffsetSeconds;              //@synthesize timezoneOffsetSeconds=_timezoneOffsetSeconds - In the implementation block
@property (nonatomic,copy) NSString * location;                           //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSArray * specificUsers;                       //@synthesize specificUsers=_specificUsers - In the implementation block
@property (nonatomic,copy) NSString * private;                            //@synthesize private=_private - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)unpublishedMedia;
-(void)setUnpublishedMedia:(NSString *)arg1 ;
-(NSString *)reactionTo;
-(void)setReactionTo:(NSString *)arg1 ;
-(NSString *)backstagePostType;
-(void)setBackstagePostType:(NSString *)arg1 ;
-(NSNumber *)exifTime;
-(void)setExifTime:(NSNumber *)arg1 ;
-(NSNumber *)timezoneOffsetSeconds;
-(void)setTimezoneOffsetSeconds:(NSNumber *)arg1 ;
-(NSArray *)specificUsers;
-(void)setSpecificUsers:(NSArray *)arg1 ;
-(void)setPrivate:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(NSString *)mediaType;
-(void)setMediaType:(NSString *)arg1 ;
-(NSString *)private;
-(NSString *)threadId;
-(void)setThreadId:(NSString *)arg1 ;
@end

