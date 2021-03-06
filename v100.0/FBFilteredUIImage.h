/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBFilteredUIImage : NSObject {

	Image<facebook::image_processing::RGBA8Pixel>* _rgb8image;
	FilterConfig _filterConfig;
	unique_ptr<facebook::image_processing::FilteredImage, std::__1::default_delete<facebook::image_processing::FilteredImage> >* _filteredImage;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _filterParams;

}
-(void)clearFilter:(id)arg1 ;
-(id)initWithUIImage:(id)arg1 withFilterConfig:(FilterConfig)arg2 withImageMetadata:(id)arg3 ;
-(id)applyFilter:(id)arg1 withParameters:(id)arg2 ;
@end

