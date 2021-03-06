/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAdditionalSectionDelegate;
@class NSString, NSArray;

@interface FBAdditionalSection : NSObject {

	BOOL _isLoaded;
	BOOL _hidingMore;
	BOOL _showHeader;
	NSString* _name;
	NSString* _indexString;
	long long _showAllCutoff;
	NSArray* _data;
	id<FBAdditionalSectionDelegate> _delegate;
	/*^block*/id _loadDataCompletionBlock;

}

@property (nonatomic,copy,readonly) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * indexString;                                //@synthesize indexString=_indexString - In the implementation block
@property (nonatomic,readonly) BOOL isLoaded;                                              //@synthesize isLoaded=_isLoaded - In the implementation block
@property (nonatomic,readonly) long long showAllCutoff;                                    //@synthesize showAllCutoff=_showAllCutoff - In the implementation block
@property (nonatomic,copy) NSArray * data;                                                 //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) BOOL hidingMore;                                              //@synthesize hidingMore=_hidingMore - In the implementation block
@property (assign,nonatomic,__weak) id<FBAdditionalSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id loadDataCompletionBlock;                                     //@synthesize loadDataCompletionBlock=_loadDataCompletionBlock - In the implementation block
@property (assign,nonatomic) BOOL showHeader;                                              //@synthesize showHeader=_showHeader - In the implementation block
-(id)initWithName:(id)arg1 indexString:(id)arg2 maxSuggestionsToShow:(unsigned long long)arg3 ;
-(void)updateFinalData:(id)arg1 ;
-(BOOL)hasFaceboxes;
-(void)logSectionConversion;
-(id)loadDataCompletionBlock;
-(void)setLoadDataCompletionBlock:(id)arg1 ;
-(void)loadSectionData;
-(BOOL)hidingMore;
-(long long)showAllCutoff;
-(void)setHidingMore:(BOOL)arg1 ;
-(BOOL)showPartialData;
-(void)setDelegate:(id<FBAdditionalSectionDelegate>)arg1 ;
-(id<FBAdditionalSectionDelegate>)delegate;
-(NSString *)name;
-(id)title;
-(NSArray *)data;
-(void)setData:(NSArray *)arg1 ;
-(BOOL)isLoaded;
-(NSString *)indexString;
-(BOOL)showLoading;
-(void)setShowHeader:(BOOL)arg1 ;
-(BOOL)showHeader;
@end

