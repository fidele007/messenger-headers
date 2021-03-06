/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController, NSURL, FBPopoverInfo, NSString;

@interface FBNavigationInfo : NSObject {

	UIViewController* _viewController;
	NSURL* _URL;
	unsigned long long _method;
	unsigned long long _options;
	FBPopoverInfo* _popoverInfo;
	/*^block*/id _completion;
	/*^block*/id _whenClosed;
	double _timestamp;
	NSString* _sourceApplication;

}

@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                    //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * sourceApplication;                     //@synthesize sourceApplication=_sourceApplication - In the implementation block
@property (assign,nonatomic) unsigned long long method;                      //@synthesize method=_method - In the implementation block
@property (assign,nonatomic) unsigned long long options;                     //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) FBPopoverInfo * popoverInfo;                    //@synthesize popoverInfo=_popoverInfo - In the implementation block
@property (nonatomic,copy) id completion;                                    //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) id whenClosed;                                    //@synthesize whenClosed=_whenClosed - In the implementation block
@property (assign,nonatomic) double timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
+(id)infoWithViewController:(id)arg1 method:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
+(id)infoWithURL:(id)arg1 ;
+(id)infoWithViewController:(id)arg1 ;
+(id)infoWithViewController:(id)arg1 method:(unsigned long long)arg2 options:(unsigned long long)arg3 popoverInfo:(id)arg4 completion:(/*^block*/id)arg5 whenClosed:(/*^block*/id)arg6 ;
+(id)infoWithURL:(id)arg1 completion:(/*^block*/id)arg2 whenClosed:(/*^block*/id)arg3 ;
+(id)infoWithURL:(id)arg1 method:(unsigned long long)arg2 options:(unsigned long long)arg3 popoverInfo:(id)arg4 completion:(/*^block*/id)arg5 whenClosed:(/*^block*/id)arg6 ;
+(id)infoWithURL:(id)arg1 method:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
+(id)navigationInfoWithTimestamp:(id)arg1 ;
+(id)infoWithViewController:(id)arg1 method:(unsigned long long)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 whenClosed:(/*^block*/id)arg5 ;
+(id)infoWithViewController:(id)arg1 method:(unsigned long long)arg2 options:(unsigned long long)arg3 popoverInfo:(id)arg4 completion:(/*^block*/id)arg5 whenClosed:(/*^block*/id)arg6 timestamp:(double)arg7 ;
+(id)infoWithURL:(id)arg1 method:(unsigned long long)arg2 options:(unsigned long long)arg3 popoverInfo:(id)arg4 completion:(/*^block*/id)arg5 whenClosed:(/*^block*/id)arg6 timestamp:(double)arg7 ;
+(id)infoWithViewController:(id)arg1 completion:(/*^block*/id)arg2 whenClosed:(/*^block*/id)arg3 ;
+(id)infoWithViewController:(id)arg1 popoverInfo:(id)arg2 ;
+(id)infoWithViewController:(id)arg1 popoverInfo:(id)arg2 completion:(/*^block*/id)arg3 whenClosed:(/*^block*/id)arg4 ;
+(id)infoWithViewController:(id)arg1 method:(unsigned long long)arg2 options:(unsigned long long)arg3 popoverInfo:(id)arg4 ;
+(id)infoWithURL:(id)arg1 popoverInfo:(id)arg2 ;
+(id)infoWithURL:(id)arg1 method:(unsigned long long)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 whenClosed:(/*^block*/id)arg5 ;
-(NSString *)sourceApplication;
-(void)setSourceApplication:(NSString *)arg1 ;
-(void)setPopoverInfo:(FBPopoverInfo *)arg1 ;
-(FBPopoverInfo *)popoverInfo;
-(id)whenClosed;
-(void)setWhenClosed:(id)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(unsigned long long)method;
-(void)setMethod:(unsigned long long)arg1 ;
@end

