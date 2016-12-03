/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMImageUrlCollection;

@interface FBContactSearchPageResult : FBValueObject <NSCopying> {

	BOOL _isAway;
	BOOL _hasMessenger;
	NSString* _pageId;
	NSString* _name;
	NSString* _username;
	NSString* _title;
	NSString* _subtitle;
	NSString* _bestDescription;
	NSString* _effectiveResponseTimespan;
	FBMImageUrlCollection* _imageUrls;
	long long _contactPageResultType;
	NSString* _style;

}

@property (nonatomic,copy,readonly) NSString * pageId;                                 //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * username;                               //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * bestDescription;                        //@synthesize bestDescription=_bestDescription - In the implementation block
@property (nonatomic,readonly) BOOL isAway;                                            //@synthesize isAway=_isAway - In the implementation block
@property (nonatomic,copy,readonly) NSString * effectiveResponseTimespan;              //@synthesize effectiveResponseTimespan=_effectiveResponseTimespan - In the implementation block
@property (nonatomic,readonly) BOOL hasMessenger;                                      //@synthesize hasMessenger=_hasMessenger - In the implementation block
@property (nonatomic,copy,readonly) FBMImageUrlCollection * imageUrls;                 //@synthesize imageUrls=_imageUrls - In the implementation block
@property (nonatomic,readonly) long long contactPageResultType;                        //@synthesize contactPageResultType=_contactPageResultType - In the implementation block
@property (nonatomic,copy,readonly) NSString * style;                                  //@synthesize style=_style - In the implementation block
-(BOOL)hasMessenger;
-(NSString *)pageId;
-(NSString *)bestDescription;
-(FBMImageUrlCollection *)imageUrls;
-(long long)contactPageResultType;
-(NSString *)effectiveResponseTimespan;
-(BOOL)isAway;
-(id)initWithPageId:(id)arg1 name:(id)arg2 username:(id)arg3 title:(id)arg4 subtitle:(id)arg5 bestDescription:(id)arg6 isAway:(BOOL)arg7 effectiveResponseTimespan:(id)arg8 hasMessenger:(BOOL)arg9 imageUrls:(id)arg10 contactPageResultType:(long long)arg11 style:(id)arg12 ;
-(NSString *)name;
-(NSString *)title;
-(NSString *)style;
-(NSString *)subtitle;
-(NSString *)username;
@end

