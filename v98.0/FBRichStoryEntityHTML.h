/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBRichStoryEntityHTMLProtocol.h>

@protocol FBRichStoryEntityImageProtocol;
@class NSString, NSURL;

@interface FBRichStoryEntityHTML : NSObject <FBRichStoryEntityHTMLProtocol> {

	NSString* _htmlString;
	NSURL* _baseURL;
	id<FBRichStoryEntityImageProtocol> _previewImage;

}

@property (nonatomic,copy) NSString * htmlString;                                          //@synthesize htmlString=_htmlString - In the implementation block
@property (nonatomic,copy) NSURL * baseURL;                                                //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) id<FBRichStoryEntityImageProtocol> previewImage;              //@synthesize previewImage=_previewImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)htmlWithHTMLString:(id)arg1 baseURL:(id)arg2 previewImage:(id)arg3 ;
-(id)initWithHTMLString:(id)arg1 baseURL:(id)arg2 previewImage:(id)arg3 ;
-(NSString *)description;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSString *)htmlString;
-(void)setHtmlString:(NSString *)arg1 ;
-(void)setPreviewImage:(id<FBRichStoryEntityImageProtocol>)arg1 ;
-(id<FBRichStoryEntityImageProtocol>)previewImage;
@end
