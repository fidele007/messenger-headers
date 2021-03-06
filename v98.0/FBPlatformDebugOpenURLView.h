/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@class FBPlatformDebugDataView, NSURL, NSDictionary, NSString;

@interface FBPlatformDebugOpenURLView : UIView <UITextFieldDelegate> {

	FBPlatformDebugDataView* _dataView;
	FBPlatformDebugDataView* _resultView;

}

@property (nonatomic,retain) FBPlatformDebugDataView * resultView;              //@synthesize resultView=_resultView - In the implementation block
@property (nonatomic,copy) NSURL * baseURL; 
@property (nonatomic,copy) NSDictionary * bridgeArgs; 
@property (nonatomic,copy) NSDictionary * methodArgs; 
@property (nonatomic,copy) NSDictionary * queryParameters; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_dictionaryForDataView:(id)arg1 textViewLabel:(id)arg2 ;
-(void)_setDictionary:(id)arg1 forDataView:(id)arg2 textViewLabel:(id)arg3 ;
-(NSDictionary *)bridgeArgs;
-(void)setBridgeArgs:(NSDictionary *)arg1 ;
-(NSDictionary *)methodArgs;
-(void)setMethodArgs:(NSDictionary *)arg1 ;
-(void)hideResultViewAnimated:(BOOL)arg1 ;
-(void)showResultViewWithURL:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)dismissKeyboard;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSDictionary *)queryParameters;
-(void)setQueryParameters:(NSDictionary *)arg1 ;
-(FBPlatformDebugDataView *)resultView;
-(void)setResultView:(FBPlatformDebugDataView *)arg1 ;
@end

