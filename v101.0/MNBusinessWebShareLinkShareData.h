/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNBusinessWebShareLinkShareData : FBValueObject <NSCopying> {

	NSString* _pageID;
	NSString* _webpageURLString;
	NSString* _title;
	NSString* _subtitle;
	NSString* _imageURLString;
	NSString* _source;

}

@property (nonatomic,copy,readonly) NSString * pageID;                        //@synthesize pageID=_pageID - In the implementation block
@property (nonatomic,copy,readonly) NSString * webpageURLString;              //@synthesize webpageURLString=_webpageURLString - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageURLString;                //@synthesize imageURLString=_imageURLString - In the implementation block
@property (nonatomic,copy,readonly) NSString * source;                        //@synthesize source=_source - In the implementation block
-(id)initWithPageID:(id)arg1 webpageURLString:(id)arg2 title:(id)arg3 subtitle:(id)arg4 imageURLString:(id)arg5 source:(id)arg6 ;
-(NSString *)imageURLString;
-(NSString *)webpageURLString;
-(NSString *)source;
-(NSString *)title;
-(NSString *)subtitle;
-(NSString *)pageID;
@end

