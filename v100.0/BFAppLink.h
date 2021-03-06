/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSArray;

@interface BFAppLink : NSObject {

	BOOL _backToReferrer;
	NSURL* _sourceURL;
	NSArray* _targets;
	NSURL* _webURL;

}

@property (nonatomic,retain) NSURL * sourceURL;                                        //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,copy) NSArray * targets;                                          //@synthesize targets=_targets - In the implementation block
@property (nonatomic,retain) NSURL * webURL;                                           //@synthesize webURL=_webURL - In the implementation block
@property (assign,getter=isBackToReferrer,nonatomic) BOOL backToReferrer;              //@synthesize backToReferrer=_backToReferrer - In the implementation block
+(id)appLinkWithSourceURL:(id)arg1 targets:(id)arg2 webURL:(id)arg3 ;
+(id)appLinkWithSourceURL:(id)arg1 targets:(id)arg2 webURL:(id)arg3 isBackToReferrer:(BOOL)arg4 ;
-(id)initWithIsBackToReferrer:(BOOL)arg1 ;
-(BOOL)isBackToReferrer;
-(void)setBackToReferrer:(BOOL)arg1 ;
-(NSURL *)sourceURL;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)webURL;
-(void)setWebURL:(NSURL *)arg1 ;
-(void)setTargets:(NSArray *)arg1 ;
-(NSArray *)targets;
@end

