/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSURL, NSArray;

@interface FBMShare : FBValueObject <NSCopying> {

	int _type;
	NSString* _title;
	NSString* _caption;
	NSString* _desc;
	NSString* _src;
	NSString* _imageSrc;
	NSString* _href;
	NSString* _robotextJSONString;
	NSDictionary* _robotextTagsJSON;
	NSURL* _deepLinkURL;
	NSString* _attribution;
	NSURL* _attributionDeepLinkURL;
	NSArray* _additionalImageSrcs;

}

@property (nonatomic,copy,readonly) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * caption;                           //@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy,readonly) NSString * desc;                              //@synthesize desc=_desc - In the implementation block
@property (nonatomic,copy,readonly) NSString * src;                               //@synthesize src=_src - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageSrc;                          //@synthesize imageSrc=_imageSrc - In the implementation block
@property (nonatomic,copy,readonly) NSString * href;                              //@synthesize href=_href - In the implementation block
@property (nonatomic,copy,readonly) NSString * robotextJSONString;                //@synthesize robotextJSONString=_robotextJSONString - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * robotextTagsJSON;              //@synthesize robotextTagsJSON=_robotextTagsJSON - In the implementation block
@property (nonatomic,copy,readonly) NSURL * deepLinkURL;                          //@synthesize deepLinkURL=_deepLinkURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * attribution;                       //@synthesize attribution=_attribution - In the implementation block
@property (nonatomic,copy,readonly) NSURL * attributionDeepLinkURL;               //@synthesize attributionDeepLinkURL=_attributionDeepLinkURL - In the implementation block
@property (nonatomic,copy,readonly) NSArray * additionalImageSrcs;                //@synthesize additionalImageSrcs=_additionalImageSrcs - In the implementation block
@property (nonatomic,readonly) int type;                                          //@synthesize type=_type - In the implementation block
-(NSURL *)deepLinkURL;
-(NSURL *)attributionDeepLinkURL;
-(id)initWithTitle:(id)arg1 caption:(id)arg2 desc:(id)arg3 src:(id)arg4 imageSrc:(id)arg5 href:(id)arg6 robotextJSONString:(id)arg7 robotextTagsJSON:(id)arg8 deepLinkURL:(id)arg9 attribution:(id)arg10 attributionDeepLinkURL:(id)arg11 additionalImageSrcs:(id)arg12 type:(int)arg13 ;
-(NSString *)imageSrc;
-(NSString *)robotextJSONString;
-(NSDictionary *)robotextTagsJSON;
-(NSArray *)additionalImageSrcs;
-(int)type;
-(NSString *)title;
-(NSString *)href;
-(NSString *)caption;
-(NSString *)attribution;
-(NSString *)src;
-(NSString *)desc;
@end

