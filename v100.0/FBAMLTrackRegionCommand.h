/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBFilterCommand.h>

@class NSString;

@interface FBAMLTrackRegionCommand : NSObject <FBFilterCommand> {

	CGPoint _location;
	CGSize _viewSize;

}

@property (assign,nonatomic) CGPoint location;                           //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) CGSize viewSize;                            //@synthesize viewSize=_viewSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * filterClass; 
+(id)commandWithLocation:(CGPoint)arg1 viewSize:(CGSize)arg2 ;
-(NSString *)filterClass;
-(void)setViewSize:(CGSize)arg1 ;
-(CGPoint)location;
-(void)setLocation:(CGPoint)arg1 ;
-(CGSize)viewSize;
@end
